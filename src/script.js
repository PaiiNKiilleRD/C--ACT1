


// AREA DEL TRIANGULO
const btnArea = document.getElementById("btnArea");

const calcularArea = () => {

    const base = parseFloat(document.getElementById("base").value);
    const altura = parseFloat(document.getElementById("altura").value);
    const resultado = document.getElementById("resultado")

    if (isNaN(base) || isNaN(altura)) {
        alert("Inserte los valores")
        return;
    }

    const area = (base * altura) / 2;

    resultado.innerText = area;

    base.value = "";
    altura.value = "";
}

btnArea.addEventListener("click", calcularArea)


// MOSTRAR DATOS

const btnDatos = document.getElementById("btnDatos");

const mostrarDatos = () => {
    const nombre = document.getElementById("nombre").value
    const apellido = document.getElementById("apellido").value
    const fecha = document.getElementById("fecha").value

    if (nombre == "" || apellido == "" || fecha == "") {
        alert("Inserte los datos");
        return;
    }

    const mostrarNombre = document.getElementById("mostrarNombre")
    const mostrarApellido = document.getElementById("mostrarApellido")
    const mostrarFecha = document.getElementById("mostrarFecha")


    mostrarNombre.innerText = nombre;
    mostrarApellido.innerText = apellido;
    mostrarFecha.innerText = fecha;
}


btnDatos.addEventListener("click", mostrarDatos)


