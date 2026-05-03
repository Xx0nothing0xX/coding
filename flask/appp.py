from flask import Flask, render_template
from flask_sqlalchemy import SQLAlchemy
from datetime import datetime

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///ayush.db'
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False
db = SQLAlchemy(app)

class User(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(100), nullable=False)
    email = db.Column(db.String(120),  nullable=False)
    date_created = db.Column(db.DateTime, default=datetime.utcnow)
    
    def __repr__(self):
        return f"<User {self.name}>"

@app.route("/")
def hello_world():
    user = User(name="ayush", email="ayush@example.com")
    db.session.add(user)
    db.session.commit()
    return render_template("index.html")

@app.route("/users")
def users():
    all_users = User.query.all()
    return render_template("index.html", users=all_users)

if __name__ == "__main__":
    app.run(debug=True, port=7000)