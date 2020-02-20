$(function() {

    Morris.Area({
        element: 'morris-area-chart',
        data: [{
            period: '2017 Q1',
            filmes: 266,
            series: 28,
            documentarios: 47
        }, {
            period: '2016 Q4',
            filmes: 478,
            series: 94,
            documentarios: 41
        }, {
            period: '2016 Q3',
            filmes: 312,
            series: 69,
            documentarios: 31
        }, {
            period: '2016 Q2',
            filmes: 567,
            series: 97,
            documentarios: 89
        }, {
            period: '2016 Q1',
            filmes: 510,
            series: 114,
            documentarios: 93
        }],
        xkey: 'period',
        ykeys: ['filmes', 'series', 'documentarios'],
        labels: ['Filmes', 'Séries', 'Documentários'],
        pointSize: 2,
        hideHover: 'auto',
        resize: true
    });
    Morris.Donut({
        element: 'morris-donut-chart',
        data: [{
            label: "Documentários",
            value: 24
        }, {
            label: "Filmes",
            value: 60
        }, {
            label: "Séries",
            value: 40
        }],
        resize: true
    });

    
    Morris.Line({
        
        element: 'morris-line-chart',
        data: [{
            d: 'Janeiro',
            visits: 802
        }, {
            d: 'Fevereiro',
            visits: 783
        }, {
            d: 'Março',
            visits: 820
        }, {
            d: 'Abril',
            visits: 839
        }, {
            d: 'Maio',
            visits: 792
        }],
        
        xkey: 'd',
        ykeys: ['visits'],
        labels: ['Visits'],
        smooth: false,
        resize: true
    });

    Morris.Bar({
        element: 'morris-bar-chart',
        data: [{
            device: 'iPhone',
            geekbench: 136
        }, {
            device: 'iPhone 3G',
            geekbench: 137
        }, {
            device: 'iPhone 3GS',
            geekbench: 275
        }, {
            device: 'iPhone 4',
            geekbench: 380
        }, {
            device: 'iPhone 4S',
            geekbench: 655
        }, {
            device: 'iPhone 5',
            geekbench: 1571
        }],
        xkey: 'device',
        ykeys: ['geekbench'],
        labels: ['Geekbench'],
        barRatio: 0.4,
        xLabelAngle: 35,
        hideHover: 'auto',
        resize: true
    });


});