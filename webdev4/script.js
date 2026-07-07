const menuBtn = document.querySelector('.menu-btn');
const navLinks = document.querySelector('.nav-links');

menuBtn.addEventListener('click', function () {
  navLinks.classList.toggle('open');
});

document.querySelectorAll('.nav-links a').forEach(link => {
  link.addEventListener('click', () => navLinks.classList.remove('open'));
});

const sections = document.querySelectorAll('section');

const revealObserver = new IntersectionObserver((entries) => {
  entries.forEach(entry => {
    if (entry.isIntersecting) {
      entry.target.classList.add('visible');
      revealObserver.unobserve(entry.target);
    }
  });
}, {
  threshold: 0.15
});

sections.forEach(section => revealObserver.observe(section));

const navLinkEls = document.querySelectorAll('.nav-links a');

const navObserver = new IntersectionObserver((entries) => {
  entries.forEach(entry => {
    const id = entry.target.getAttribute('id');
    const matchingLink = document.querySelector(`.nav-links a[href="#${id}"]`);
    if (!matchingLink) return;

    if (entry.isIntersecting) {
      navLinkEls.forEach(link => link.classList.remove('active'));
      matchingLink.classList.add('active');
    }
  });
}, {
  rootMargin: '-40% 0px -40% 0px'
});

document.querySelectorAll('section[id]').forEach(section => navObserver.observe(section));