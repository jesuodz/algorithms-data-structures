const TAX_RATE = 0.10;
const PRICE_PHONE = 70;
const PRICE_ACCESORIES = 10;
const SPENDING_THRESHOLD = 320;

var account_balance = prompt( "Account balance" );
var amount = 0;

function calculateTaxes( amt ) {
    return amt * TAX_RATE;
}

function formatPrice( amt ) {
    return '$' + String( amt.toFixed( 2 ));
}

while ( account_balance >= amount ) {
    var ask = prompt( "Do you want to buy a phone? y/n" );

    if ( ask == 'y' && SPENDING_THRESHOLD > amount ) {
        amount = amount + PRICE_ACCESORIES + PRICE_PHONE;
    } else if ( ask == 'y' ) {
        amount += PRICE_PHONE;
    } else {
        break;
    }
}

amount += calculateTaxes( amount );
console.log( "Your purchase is ", formatPrice( amount ));

if ( account_balance < amount ) {
    console.log( "Sorry, you can't afford it." );
}