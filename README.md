<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Bounce House Rental Cost Calculator</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      line-height: 1.6;
      margin: 20px;
    }
    table {
      width: 100%;
      border-collapse: collapse;
      margin-bottom: 20px;
    }
    table, th, td {
      border: 1px solid #ddd;
    }
    th, td {
      padding: 10px;
      text-align: left;
    }
    th {
      background-color: #f4f4f4;
    }
    details {
      margin-bottom: 10px;
    }
    details summary {
      font-weight: bold;
      cursor: pointer;
    }
    .code-block {
      background-color: #f4f4f4;
      border-left: 4px solid #ccc;
      padding: 10px;
      font-family: Consolas, "Courier New", monospace;
    }
  </style>
</head>
<body>

<header>
  <h1>Bounce House Rental Cost Calculator 🎉</h1>
  <p>
    A local party equipment company offers bounce house rentals. This C program calculates the cost for a bounce house rental based on the selection, number of days, and number of hours the bounce house will be rented.
  </p>
</header>

<hr>

<details>
  <summary>Table of Contents 📖</summary>
  <ul>
    <li><a href="#task">Task</a></li>
    <li><a href="#rental-charges">Rental Charges</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#program-features">Program Features</a></li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#example-output">Example Output</a></li>
  </ul>
</details>

<hr>

<section id="task">
  <h2>Task 🛠️</h2>
  <p>
    This program calculates the cost for renting a bounce house based on the following user inputs:
  </p>
  <ol>
    <li><strong>Bounce house selection</strong></li>
    <li><strong>Number of days</strong></li>
    <li><strong>Number of hours</strong></li>
  </ol>
  <p>
    The program considers different rental rates and caps the daily charge based on the selected bounce house.
  </p>
</section>

<hr>

<section id="rental-charges">
  <h2>Rental Charges 💵</h2>
  <table>
    <thead>
      <tr>
        <th>Bounce House</th>
        <th>First 3-Hour Fee</th>
        <th>Hourly Rate</th>
        <th>Per Day (Max)</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>Magic Castle</td>
        <td>$58</td>
        <td>$8</td>
        <td>$80</td>
      </tr>
      <tr>
        <td>Gigantic Jump</td>
        <td>$85</td>
        <td>$12</td>
        <td>$120</td>
      </tr>
      <tr>
        <td>Wet and Dry Slide</td>
        <td>$100</td>
        <td>$15</td>
        <td>$150</td>
      </tr>
      <tr>
        <td>Obstacle Combo with Pool</td>
        <td>$180</td>
        <td>$20</td>
        <td>$250</td>
      </tr>
    </tbody>
  </table>
  <p><strong>Rules:</strong></p>
  <ul>
    <li>For rentals under 3 hours, a flat fee applies (except for multi-day rentals).</li>
    <li>Rentals over 3 hours are charged an additional hourly fee.</li>
    <li>Multi-day rentals are capped at the daily maximum charge per day.</li>
  </ul>
</section>

<hr>

<section id="requirements">
  <h2>Requirements ✔️</h2>
  <ol>
    <li>
      The user must enter the <strong>bounce house selection</strong>, <strong>number of days</strong>, and <strong>number of hours</strong>.
    </li>
    <li>
      The program will:
      <ul>
        <li>Validate the bounce house selection. If it is not in the range of <code>1</code> to <code>4</code>, it prints:
          <div class="code-block">
            "Invalid selection. Select from 1 to 4."
          </div>
          and exits.
        </li>
        <li>Validate the number of hours (<code>>= 0</code> and <code>&lt; 24</code>). If invalid, it prints:
          <div class="code-block">
            "Invalid hours."
          </div>
          and exits.
        </li>
      </ul>
    </li>
  </ol>
</section>

<hr>

<details id="program-features">
  <summary>Program Features 🌟</summary>
  <ul>
    <li><strong>Selection Validation:</strong> Ensures the user selects a valid bounce house option.</li>
    <li><strong>Hour Validation:</strong> Ensures the entered number of hours is within acceptable bounds.</li>
    <li><strong>Flexible Pricing:</strong> Adapts pricing based on hours and days, capping charges to the daily maximum for multi-day rentals.</li>
    <li><strong>Formatted Output:</strong> Outputs the calculated charge with clear formatting for the user.</li>
  </ul>
</details>

<hr>

<section id="usage">
  <h2>Usage 🚀</h2>
  <p><strong>1. Compile the Program:</strong></p>
