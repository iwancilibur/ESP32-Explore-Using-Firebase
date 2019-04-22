
  var config = {
    apiKey: "AIzaSyCACuVs8QNmmxjBXd22Muma-ydYgbxm3zY",
    authDomain: "esp32tutorial.firebaseapp.com",
    databaseURL: "https://esp32tutorial.firebaseio.com",
    projectId: "esp32tutorial",
    storageBucket: "esp32tutorial.appspot.com",
    messagingSenderId: "934674716898"
  };
  firebase.initializeApp(config);
  
  

  const suhu = document.getElementById('suhu'); //mengambil data dari parameter suhu
  const dbRef = firebase.database().ref().child('suhu'); //mengambil data dari firebase database dengan nama suhu
  dbRef.on('value', snap => suhu.innerText = snap.val()); //menaruh nilai suhu kedalam kolom yang sudah disediakan

  const kelembaban= document.getElementById('kelembaban'); //mengambil data dari parameter kelembaban
  const dbRef2 = firebase.database().ref().child('kelembaban'); //mengambil data dari firebase database dengan nama kelembaban
  dbRef2.on('value', snap => kelembaban.innerText = snap.val()); //menaruh nilai kelembabankedalam kolom yang sudah disediakan

  const sensor = document.getElementById('sensor'); //mengambil data dari parameter sensor
  const dbRef3 = firebase.database().ref().child('sensor'); //mengambil data dari firebase database dengan nama sensor
  dbRef3.on('value', snap => sensor.innerText = snap.val()); //menaruh nilai sensor kedalam kolom yang sudah disediakan
  
  var db = firebase.database(); //membuat variabel dari firebase database dengan nama db
	  
   var relay1 = db.ref('relay1'); //membuat variabel bernama relay1 dengan berisikan relay1
      relay1.on('value', function(snapshot) { //membuat fungsi isi dari variabel relay1
        console.log("relay1: "+snapshot.val()); //mengambil nilai console log relay3
        if(snapshot.val()) document.querySelector("#relay1").style.background = 'rgb(255, 100, 100)'; //jika relay diberi inputan 1 maka akan berubah warna background menjadi biru
        if(!snapshot.val()) document.querySelector("#relay1").style.background = 'transparent'; //jika relay diberi inputan 0 maka akan berubah warna background menjadi putih transparant
        document.querySelector("#Lampu1 > input").checked = snapshot.val(); //memberikan informasi bahwa lampu1 memberikan inputan
      }); //simbol untuk menutup fungsi
	  
  var relay2 = db.ref('relay2'); //membuat variabel bernama relay2 dengan berisikan relay2
      relay2.on('value', function(snapshot) { //membuat fungsi isi dari variabel relay2
        console.log("relay2: "+snapshot.val()); //mengambil nilai console log relay2
        if(snapshot.val()) document.querySelector("#relay2").style.background = 'rgb(255, 100, 100)'; //jika relay diberi inputan 1 maka akan berubah warna background menjadi biru
        if(!snapshot.val()) document.querySelector("#relay2").style.background = 'transparent'; //jika relay diberi inputan 0 maka akan berubah warna background menjadi putih transparant
        document.querySelector("#Lampu2 > input").checked = snapshot.val(); //memberikan informasi bahwa lampu2 memberikan inputan
      }); //simbol untuk menutup fungsi
	  
  var relay3 = db.ref('relay3'); //membuat variabel bernama relay3 dengan berisikan relay3
      relay3.on('value', function(snapshot) { //membuat fungsi isi dari variabel relay3
        console.log("relay3: "+snapshot.val()); //mengambil nilai console log relay3
        if(snapshot.val()) document.querySelector("#relay3").style.background = 'rgb(255, 100, 100)'; //jika relay diberi inputan 1 maka akan berubah warna background menjadi biru
        if(!snapshot.val()) document.querySelector("#relay3").style.background = 'transparent'; //jika relay diberi inputan 0 maka akan berubah warna background menjadi putih transparant
        document.querySelector("#Lampu3 > input").checked = snapshot.val(); //memberikan informasi bahwa lampu3 memberikan inputan
      }); //simbol untuk menutup fungsi
	
	var w=document.querySelector('waktu'); //membuat variabel w dengan value waktu
  var w2=document.querySelector('waktu2'); //membuat variabel w2 dengan value waktu2
  var w3=document.querySelector('waktu3'); //membuat variabel w3 dengan value waktu3
	
    var pad=function(x){
		return x < 10 ? '0' + x : x;
		}
		
		var tampilkanWaktu = function(){  //membuat fungsi dengan variabel bernama tanmpilkanWaktu
                var d = new Date(); 
                var h = pad(d.getHours());  //membuat variabel dengan nama h untuk mengambil jam
                var m = pad(d.getMinutes()); //membuat variabel dengan nama m untuk mengambil menit
                var s = pad(d.getSeconds()); //membuat variabel dengan nama s untuk mengambil detik
                w.innerHTML = [h,m,s].join(':');  //menampilkan jam pada variabel w dengan format h,m,s yang dipisahkan oleh tanda :
                w2.innerHTML = [h,m,s].join(':'); //menampilkan jam pada variabel w2 dengan format h,m,s yang dipisahkan oleh tanda :
                w3.innerHTML = [h,m,s].join(':'); //menampilkan jam pada variabel w3 dengan format h,m,s yang dipisahkan oleh tanda :
            } //simbol untuk menutup suatu fungsi
			
			setInterval(tampilkanWaktu,1000); //menset interval untuk menampilkan waktu ...
			
	