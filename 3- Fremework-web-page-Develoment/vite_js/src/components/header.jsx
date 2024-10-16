import React from 'react'

export default function Header() {
  var a=10;
  let b=20;
  const c=30;
  function sum(a,b){
    return a+b;
  }
  return (
    <div>
      <h1 style={{color:'red',textAlign:'center'}}>Hello world</h1>
      <p>Result a this {a}</p>
      <p>Result b this {b}</p>
      <p>Result c this {c}</p>
    </div>
  );
}
