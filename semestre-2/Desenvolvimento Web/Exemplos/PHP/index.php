
<!DOCTYPE html>
<html lang="pt-BR">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Portal Celestial | Acesso</title>

<style>
:root {
    --bg: #060911;
    --panel: #0e1423;
    --text: #f5f2e9;
    --muted: #93a0b6;
    --accent: #eac47b;
    --accent-rgb: 234, 196, 123;
    --secondary: #72cfff;
}

body[data-mode="orion"] {
    --accent: #72cfff;
    --accent-rgb: 114, 207, 255;
    --secondary: #eac47b;
}

* {
    box-sizing: border-box;
}

html {
    scroll-behavior: smooth;
}

body {
    margin: 0;
    min-height: 100vh;
    font-family: "Segoe UI", Arial, sans-serif;
    color: var(--text);
    background:
        radial-gradient(ellipse at 15% 45%, #172444 0%, transparent 45%),
        radial-gradient(ellipse at 85% 80%, #23192e 0%, transparent 40%),
        var(--bg);
    transition: background .4s;
}

body::before {
    content: "";
    position: fixed;
    inset: 0;
    pointer-events: none;
    opacity: .3;
    background-image:
        radial-gradient(#fff 1px, transparent 1px);
    background-size: 75px 75px;
    mask-image: linear-gradient(to bottom, black, transparent);
}

.layout {
    min-height: 100vh;
    max-width: 1450px;
    margin: auto;
    display: grid;
    grid-template-columns: 1fr minmax(350px, 475px);
    gap: 60px;
    padding: 45px clamp(24px, 6vw, 100px);
    align-items: center;
}

/* IDENTIDADE */
.brand {
    display: flex;
    align-items: center;
    gap: 14px;
    letter-spacing: 4px;
    font-weight: 700;
    font-size: 14px;
}

.brand-icon {
    width: 42px;
    height: 42px;
    border: 1px solid var(--accent);
    display: grid;
    place-items: center;
    transform: rotate(45deg);
    box-shadow: 0 0 20px rgba(var(--accent-rgb), .2);
    color: var(--accent);
}

.brand-icon span {
    transform: rotate(-45deg);
    font-size: 23px;
}

.eyebrow {
    color: var(--accent);
    letter-spacing: 5px;
    font-size: 11px;
    font-weight: 700;
}

.intro h1 {
    font-size: clamp(48px, 6vw, 88px);
    font-weight: 300;
    letter-spacing: -3px;
    line-height: 1.02;
    margin: 20px 0;
}

.intro h1 strong {
    color: var(--accent);
    font-weight: 500;
    text-shadow: 0 0 35px rgba(var(--accent-rgb), .25);
}

.intro p {
    line-height: 1.8;
    max-width: 520px;
    color: var(--muted);
    font-size: 15px;
}

/* NÚCLEO CELESTIAL */
.universe {
    position: relative;
    width: min(100%, 520px);
    height: 390px;
    display: grid;
    place-items: center;
    isolation: isolate;
}

.universe::before {
    content: "";
    position: absolute;
    width: 310px;
    height: 310px;
    background: rgba(var(--accent-rgb), .08);
    border-radius: 50%;
    filter: blur(65px);
}

.orbit {
    position: absolute;
    border: 1px solid rgba(var(--accent-rgb), .2);
    border-radius: 50%;
    animation: rotate 30s linear infinite;
}

.orbit.one {
    width: 340px;
    height: 340px;
    border-style: dashed;
}

.orbit.two {
    width: 275px;
    height: 275px;
    transform: rotate(55deg) scaleX(.63);
    animation-duration: 19s;
}

.orbit.three {
    width: 390px;
    height: 145px;
    transform: rotate(-28deg);
    animation-direction: reverse;
}

.orbit.one::after {
    content: "";
    position: absolute;
    top: 29px;
    left: 30px;
    width: 8px;
    height: 8px;
    border-radius: 50%;
    background: var(--accent);
    box-shadow: 0 0 20px var(--accent);
}

.core {
    position: relative;
    width: 195px;
    height: 195px;
    border-radius: 50%;
    background:
        radial-gradient(circle at 35% 25%, #fff3c6 0%, var(--accent) 9%, #8b603b 35%, #101c35 70%);
    box-shadow:
        0 0 50px rgba(var(--accent-rgb), .28),
        inset -25px -24px 40px #050912;
    animation: float 6s ease-in-out infinite;
    transition: background .4s;
}

body[data-mode="orion"] .core {
    background:
        radial-gradient(circle at 35% 25%, #fff 0%, #9ae5ff 9%, #245f91 35%, #09152f 72%);
}

.core::after {
    content: "";
    position: absolute;
    inset: -13px;
    border: 1px solid rgba(var(--accent-rgb), .45);
    border-radius: 50%;
    box-shadow: 0 0 30px rgba(var(--accent-rgb), .15);
}

.coordinates {
    position: absolute;
    bottom: 10px;
    left: 0;
    color: var(--muted);
    font-size: 10px;
    line-height: 2;
    letter-spacing: 2px;
}

@keyframes rotate {
    to { transform: rotate(360deg); }
}

@keyframes float {
    0%, 100% { transform: translateY(0); }
    50% { transform: translateY(-14px); }
}

/* PAINEL */
.panel {
    position: relative;
    padding: 42px;
    border: 1px solid rgba(var(--accent-rgb), .22);
    background: rgba(10, 16, 29, .88);
    backdrop-filter: blur(22px);
    clip-path: polygon(
        0 0,
        calc(100% - 24px) 0,
        100% 24px,
        100% 100%,
        24px 100%,
        0 calc(100% - 24px)
    );
    box-shadow: 0 25px 80px #0006;
}

.panel::before {
    content: "";
    position: absolute;
    top: 0;
    left: 0;
    width: 85px;
    height: 2px;
    background: var(--accent);
    box-shadow: 0 0 20px var(--accent);
}

.panel-head {
    margin-bottom: 34px;
}

.panel-head h2 {
    font-size: 34px;
    font-weight: 400;
    margin: 14px 0 8px;
}

.panel-head p {
    font-size: 13px;
    color: var(--muted);
    line-height: 1.7;
}

.mode-switch {
    display: grid;
    grid-template-columns: 1fr 1fr;
    gap: 8px;
    margin-bottom: 30px;
    padding: 5px;
    background: #080d18;
    border: 1px solid #263247;
}

.mode-btn {
    padding: 13px 6px;
    background: transparent;
    color: var(--muted);
    border: 1px solid transparent;
    cursor: pointer;
    font-size: 11px;
    letter-spacing: 2px;
    transition: .25s;
}

.mode-btn.active {
    color: var(--accent);
    border-color: rgba(var(--accent-rgb), .45);
    background: rgba(var(--accent-rgb), .08);
    box-shadow: inset 0 0 20px rgba(var(--accent-rgb), .06);
}

.field {
    margin-bottom: 24px;
}

.field label {
    display: block;
    color: #c2cad8;
    font-size: 11px;
    letter-spacing: 2px;
    margin-bottom: 10px;
    text-transform: uppercase;
}

.field input {
    display: block;
    width: 100%;
    padding: 16px 44px 16px 16px;
    outline: none;
    border: 1px solid #2b3549;
    background: #080e1b;
    color: #fff;
    font-size: 15px;
    transition: .25s;
    border-radius: 0;
}

.field input:focus {
    border-color: var(--accent);
    box-shadow: 0 0 0 3px rgba(var(--accent-rgb), .08);
}

.field input::placeholder {
    color: #657187;
}

.password-wrap {
    position: relative;
}

.show-password {
    position: absolute;
    right: 10px;
    top: 50%;
    transform: translateY(-50%);
    background: none;
    border: none;
    padding: 8px;
    cursor: pointer;
    color: var(--muted);
    font-size: 12px;
}

.show-password:hover {
    color: var(--accent);
}

.submit {
    margin-top: 10px;
    width: 100%;
    border: 1px solid var(--accent);
    padding: 18px;
    font-size: 12px;
    font-weight: 700;
    letter-spacing: 3px;
    color: #090d17;
    background: var(--accent);
    cursor: pointer;
    transition: .25s;
}

.submit:hover {
    transform: translateY(-2px);
    box-shadow: 0 0 28px rgba(var(--accent-rgb), .3);
    filter: brightness(1.12);
}

.error {
    min-height: 18px;
    margin: 14px 0 0;
    color: #ff9b9b;
    font-size: 12px;
}

.panel-footer {
    margin-top: 28px;
    padding-top: 22px;
    border-top: 1px solid #263247;
    display: flex;
    align-items: center;
    justify-content: space-between;
    gap: 10px;
    color: var(--muted);
    font-size: 10px;
    letter-spacing: 1px;
}

.status {
    color: #86d7b1;
}

.status::before {
    content: "";
    display: inline-block;
    width: 6px;
    height: 6px;
    margin-right: 8px;
    border-radius: 50%;
    background: currentColor;
    box-shadow: 0 0 10px currentColor;
}

/* RESPONSIVIDADE */
@media (max-width: 900px) {
    .layout {
        grid-template-columns: 1fr;
        gap: 25px;
        padding: 30px 20px;
    }

    .intro h1 {
        font-size: 48px;
    }

    .universe {
        height: 230px;
        overflow: hidden;
    }

    .core {
        width: 110px;
        height: 110px;
    }

    .orbit.one {
        width: 210px;
        height: 210px;
    }

    .orbit.two {
        width: 175px;
        height: 175px;
    }

    .orbit.three {
        width: 260px;
        height: 100px;
    }

    .coordinates {
        display: none;
    }

    .panel {
        padding: 30px 23px;
    }
}

@media (prefers-reduced-motion: reduce) {
    *, *::before, *::after {
        animation-duration: .01ms !important;
        transition-duration: .01ms !important;
    }
}
</style>
</head>

<body data-mode="sirius">

<main class="layout">

    <section class="intro">

        <div class="brand">
            <div class="brand-icon"><span>✦</span></div>
            CELESTIAL / SYSTEM
        </div>

        <div class="universe" aria-hidden="true">
            <div class="orbit one"></div>
            <div class="orbit two"></div>
            <div class="orbit three"></div>
            <div class="core"></div>

            <div class="coordinates">
                ORIGIN // SOL SYSTEM<br>
                PROTOCOL // SIRIUS & ORION<br>
                INTERFACE // 01
            </div>
        </div>

        <div class="eyebrow">✦ SISTEMA DE ACESSO RESTRITO</div>

        <h1>
            Entre no<br>
            <strong>desconhecido.</strong>
        </h1>

        <p>
            Dois astros. Um único destino.
            Acesse seu ambiente de dados através
            do Portal Celestial.
        </p>

    </section>

    <section class="panel" aria-labelledby="loginTitle">

        <div class="panel-head">
            <div class="eyebrow">PROTOCOLO / 001</div>
            <h2 id="loginTitle">Identificação</h2>
            <p>Insira suas credenciais para prosseguir.</p>
        </div>

        <div class="mode-switch" aria-label="Selecionar tema">
            <button type="button" class="mode-btn active"
                    data-theme="sirius" aria-pressed="true">
                ✦ SIRIUS
            </button>

            <button type="button" class="mode-btn"
                    data-theme="orion" aria-pressed="false">
                ◈ ORION
            </button>
        </div>

        <form action="entrar.php" method="post" id="loginForm">

            <div class="field">
                <label for="usuario">Identificação do operador</label>
                <input
                    type="text"
                    id="usuario"
                    name="usuario"
                    placeholder="Digite seu usuário"
                    autocomplete="username"
                    required
                >
            </div>

            <div class="field">
                <label for="senha">Chave de acesso</label>

                <div class="password-wrap">
                    <input
                        type="password"
                        id="senha"
                        name="senha"
                        placeholder="Digite sua senha"
                        autocomplete="current-password"
                        required
                    >

                    <button
                        type="button"
                        class="show-password"
                        id="togglePassword"
                        aria-label="Mostrar senha"
                        aria-pressed="false">
                        MOSTRAR
                    </button>
                </div>
            </div>

            <button type="submit" class="submit">
                INICIAR CONEXÃO ↗
            </button>

            <p class="error" id="loginError" role="alert"></p>
        </form>

        <div class="panel-footer">
            <span>ACESSO AUTORIZADO APENAS</span>
            <span class="status">INTERFACE PRONTA</span>
        </div>

    </section>

</main>

<script>
const body = document.body;
const themeButtons = document.querySelectorAll("[data-theme]");
const passwordInput = document.getElementById("senha");
const togglePassword = document.getElementById("togglePassword");
const form = document.getElementById("loginForm");
const error = document.getElementById("loginError");

function setTheme(theme) {
    const selected = theme === "orion" ? "orion" : "sirius";

    body.dataset.mode = selected;

    themeButtons.forEach(button => {
        const active = button.dataset.theme === selected;
        button.classList.toggle("active", active);
        button.setAttribute("aria-pressed", String(active));
    });

    try {
        localStorage.setItem("celestialTheme", selected);
    } catch (e) {
        // O tema continua funcionando sem armazenamento.
    }
}

themeButtons.forEach(button => {
    button.addEventListener("click", () => {
        setTheme(button.dataset.theme);
    });
});

try {
    setTheme(localStorage.getItem("celestialTheme") || "sirius");
} catch (e) {
    setTheme("sirius");
}

togglePassword.addEventListener("click", () => {
    const showing = passwordInput.type === "password";
    passwordInput.type = showing ? "text" : "password";
    togglePassword.textContent = showing ? "OCULTAR" : "MOSTRAR";
    togglePassword.setAttribute("aria-pressed", String(showing));
    togglePassword.setAttribute(
        "aria-label",
        showing ? "Ocultar senha" : "Mostrar senha"
    );
});

form.addEventListener("submit", event => {
    const username = document.getElementById("usuario");

    if (!username.value.trim() || !passwordInput.value.trim()) {
        event.preventDefault();
        error.textContent = "Preencha o usuário e a senha.";
        return;
    }

    error.textContent = "";

    // O formulário será enviado normalmente para entrar.php.
    // Nenhuma senha é armazenada no navegador.
});
</script>

</body>
</html>
