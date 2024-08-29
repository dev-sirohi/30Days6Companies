// I'm starting to like JS more and more

var isUgly = function(n) {
    return ([...Array(6).keys()].reduce((final, key) => {
        if (key > 1 && final > 1) {
            while (final % key == 0) {
                final /= key;
            }
        }

        return final;
    }, n) == 1);
};
