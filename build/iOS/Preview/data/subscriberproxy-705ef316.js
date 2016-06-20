
function SubscriberProxy(observable, callback)
{
	if (!(this instanceof SubscriberProxy))
		return new SubscriberProxy(observable, callback);

	observable.addSubscriber(callback);

	this.dispose = function()
	{
		observable.removeSubscriber(callback);
	};

	this.setExclusive = function(value)
	{
		observable.setValueExclusive(value, callback);
	};

	this.setExclusiveIfNoValue = function(value)
	{
		if (observable.length === 0) {
			observable.setValueExclusive(value, callback);
		}
	};
}

module.exports = SubscriberProxy;